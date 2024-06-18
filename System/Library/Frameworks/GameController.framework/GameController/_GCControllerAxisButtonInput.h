@class GCControllerAxisInput;

@interface _GCControllerAxisButtonInput : GCControllerButtonInput

@property (weak, nonatomic) GCControllerAxisInput *axis;
@property (readonly, nonatomic, getter=isPositive) BOOL positive;

- (id)collection;
- (id)localizedName;
- (void).cxx_destruct;
- (BOOL)_setValue:(float)a0;
- (float)value;
- (BOOL)isAnalog;
- (BOOL)_commitPendingValueOnQueue:(id)a0;
- (void)_setPendingValue:(float)a0;
- (BOOL)_setValue:(float)a0 queue:(id)a1;
- (BOOL)_setValueFromAxisButton:(float)a0;
- (BOOL)_setValueFromAxisButton:(float)a0 queue:(id)a1;
- (id)initWithAxis:(id)a0 positive:(BOOL)a1;
- (id)unmappedLocalizedName;

@end
