@interface NIExportedObjectForwarder : NSObject

@property (weak) id exportedObject;

- (id)initWithExportedObject:(id)a0;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;

@end
