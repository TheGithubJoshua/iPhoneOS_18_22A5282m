@interface CLAutoCohortUtilities : NSObject

+ (id)getSafeEdges;
+ (void)persistEdgeFrom:(id)a0 to:(id)a1;
+ (void)markUnvettedSafe;
+ (void)applyEdges:(id)a0 toGraph:(id)a1;
+ (BOOL)isEdgeKnownToCauseCycle:(id)a0;
+ (BOOL)autoCohortingEnabled;
+ (id)computeAutoCohortMapWithStarterGraph:(id)a0;
+ (void)markUnvettedUnsafe;
+ (void)createDirectoryAtPath:(id)a0;
+ (void)writeEdge:(id)a0 toDirectory:(id)a1;
+ (id)layerAssignmentForNode:(id)a0 inGraph:(id)a1 extendingLayering:(id)a2;
+ (void)markUnvetted:(id)a0;
+ (void)enableAutoCohortingForProcessAtPath:(id)a0;
+ (id)getUnsafeEdges;
+ (id)getUnvettedEdges;
+ (id)getEdgeFilesFromDirectory:(id)a0;
+ (id)readEdges:(id)a0;

@end
