@class NSUUID, NSMutableSet, NSMutableDictionary;

@interface HMDCoreDataCloudTransformChangeSet : NSObject {
    NSMutableSet *_inserts;
    NSMutableDictionary *_updates;
    NSMutableDictionary *_deletes;
    BOOL _shouldTransform;
    NSUUID *_homeModelID;
}

- (void).cxx_destruct;
- (id)description;

@end
