@class NSArray;

@interface UICellAccessoryConfiguration : NSObject {
    BOOL _leadingAlwaysNeedsLayout;
    BOOL _trailingAlwaysNeedsLayout;
}

@property (copy, nonatomic) NSArray *leadingAccessories;
@property (copy, nonatomic) NSArray *trailingAccessories;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)alwaysNeedsLayout;

@end
