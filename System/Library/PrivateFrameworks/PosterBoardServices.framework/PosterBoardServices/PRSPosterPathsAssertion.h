@class NSArray, BSAction;

@interface PRSPosterPathsAssertion : NSObject <NSSecureCoding> {
    BSAction *_invalidationAction;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *paths;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithPaths:(id)a0 queue:(id)a1 invalidationHandler:(id /* block */)a2;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithPaths:(id)a0 invalidationAction:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (void)invalidateWithResponder:(id)a0;
- (id)initWithPaths:(id)a0;

@end
