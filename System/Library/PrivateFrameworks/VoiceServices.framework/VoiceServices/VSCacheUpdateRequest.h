@class NSString;

@interface VSCacheUpdateRequest : NSObject {
    NSString *_modelID;
    NSString *_classID;
}

- (id)modelIdentifier;
- (id)classIdentifier;
- (id)description;
- (void)dealloc;
- (id)coalescedRequest:(id)a0;
- (id)initWithModelIdentifier:(id)a0 classIdentifier:(id)a1;

@end
