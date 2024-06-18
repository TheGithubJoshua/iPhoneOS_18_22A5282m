@class NSUUID;
@protocol NSObject;

@interface NPKAssertionWrapper : NSObject {
    id /* block */ _assertionInvalidator;
}

@property (readonly, nonatomic) id<NSObject> assertion;
@property (readonly) NSUUID *wrapperUUID;

- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithAssertion:(id)a0 invalidator:(id /* block */)a1;
- (BOOL)invalidateAssertionExpected:(BOOL)a0;

@end
