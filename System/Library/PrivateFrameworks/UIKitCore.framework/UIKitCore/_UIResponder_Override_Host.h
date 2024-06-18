@class UIResponder, NSMutableArray;

@interface _UIResponder_Override_Host : NSObject {
    NSMutableArray *_overrides;
}

@property (readonly, weak, nonatomic) UIResponder *owner;

+ (id)hostForResponder:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (void)attachOverrider:(id)a0 forTypes:(long long)a1;
- (void)detachOverrider:(id)a0 forTypes:(long long)a1;
- (long long)typesForResponder:(id)a0;

@end
