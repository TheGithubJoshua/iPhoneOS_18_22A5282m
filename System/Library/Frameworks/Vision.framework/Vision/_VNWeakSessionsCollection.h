@class NSMutableArray;

@interface _VNWeakSessionsCollection : NSObject {
    NSMutableArray *_weakSessionWrappers;
}

- (id)init;
- (void)addSession:(id)a0 droppingWeakZeroedObjects:(BOOL)a1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)allSessionsDroppingWeakZeroedObjects:(BOOL)a0;

@end
