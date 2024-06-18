@class NSArray, UIAccessibilityElementDescription;

@interface UIAccessibilityHierarchyDescription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIAccessibilityElementDescription *rootElement;
@property (retain, nonatomic) NSArray *leafElements;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
