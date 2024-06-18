@class NSString;

@interface UIRuntimeOutletCollectionConnection : UIRuntimeConnection

@property (copy) NSString *runtimeCollectionClassName;
@property BOOL addsContentToExistingCollection;

- (id)initWithCoder:(id)a0;
- (void)connect;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)connectForSimulator;
- (void)performConnect;

@end
