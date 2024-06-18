@interface ASASliderControl : ASAControl

@property (nonatomic) unsigned int value;
@property (readonly, nonatomic) struct _ASASliderRange { unsigned int x0; unsigned int x1; } range;

- (struct _ASASliderRange { unsigned int x0; unsigned int x1; })range;
- (void)setValue:(unsigned int)a0;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (unsigned int)value;
- (id)coreAudioClassName;

@end
