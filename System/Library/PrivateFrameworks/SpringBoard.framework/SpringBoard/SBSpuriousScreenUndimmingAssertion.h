@class NSString;

@interface SBSpuriousScreenUndimmingAssertion : NSObject {
    NSString *_identifier;
}

+ (void)_accessListWithBlock:(id /* block */)a0;
+ (BOOL)isAnyActive;
+ (id)debugDescription;

- (id)initWithIdentifier:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end
