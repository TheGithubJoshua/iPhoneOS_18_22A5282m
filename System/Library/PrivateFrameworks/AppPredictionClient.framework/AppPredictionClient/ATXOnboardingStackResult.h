@class ATXDefaultWidgetStack;

@interface ATXOnboardingStackResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXDefaultWidgetStack *stack1;
@property (readonly, nonatomic) ATXDefaultWidgetStack *stack2;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStack1:(id)a0 stack2:(id)a1;

@end
