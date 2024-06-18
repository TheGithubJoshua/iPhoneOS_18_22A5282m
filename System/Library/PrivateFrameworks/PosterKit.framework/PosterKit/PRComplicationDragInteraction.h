@class PRComplicationDescriptor;

@interface PRComplicationDragInteraction : UIDragInteraction

@property (readonly, nonatomic) PRComplicationDescriptor *complicationDescriptor;

+ (BOOL)isEnabledByDefault;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 complicationDescriptor:(id)a1;

@end
