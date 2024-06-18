@class NSMutableDictionary;

@interface PLAccountingNodeManager : NSObject

@property (retain) NSMutableDictionary *nodeNameToNodeID;
@property (retain) NSMutableDictionary *nodeIDToNodeName;

+ (id)sharedInstance;

- (id)init;
- (void)setupNodes;
- (id)nodeNameForNodeID:(id)a0;
- (id)nodeIDForNodeName:(id)a0 isPermanent:(BOOL)a1;
- (void)removeNodeReferenceFromCache:(id)a0;
- (void).cxx_destruct;
- (id)childNodeIDsFromChildNodeNames:(id)a0;

@end
