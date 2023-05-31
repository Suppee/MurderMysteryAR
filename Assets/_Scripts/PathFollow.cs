using UnityEngine;

namespace PathCreation.Examples {
    // Moves along a path at constant speed.
    // Depending on the end of path instruction, will either loop, reverse, or stop at the end of the path.
    public class PathFollow : MonoBehaviour {
        [SerializeField] private EndOfPathInstruction endOfPathInstruction;
        [SerializeField] private float distanceTravelled; //=> GameManager.Instance.Time;
        [SerializeField] private Transform pathParent;
        private VertexPath path;

        void Start() {
            path = GeneratePath(pathParent, GetChildren(pathParent), false);
        }

        private void Update() {   
            transform.position = path.GetPointAtDistance(distanceTravelled, endOfPathInstruction);
            transform.rotation = path.GetRotationAtDistance(distanceTravelled, endOfPathInstruction);
        }

        private Transform[] GetChildren(Transform _parent) {
            Transform[] holder = new Transform[_parent.childCount];
            for (int i = 0; i < holder.Length; i++) {
                holder[i] = _parent.GetChild(i);    
            }
            return holder;
        }

        private VertexPath GeneratePath(Transform _parent, Transform[] _path, bool _closedPath ) {
        // Create a closed, 2D bezier path from the supplied points array
        // These points are treated as anchors, which the path will pass through
        // The control points for the path will be generated automatically
        BezierPath bezierPath = new BezierPath(_path, _closedPath, PathSpace.xz);
        // Then create a vertex path from the bezier path, to be used for movement etc
        return new VertexPath(bezierPath, _parent);
        }                
    }
}