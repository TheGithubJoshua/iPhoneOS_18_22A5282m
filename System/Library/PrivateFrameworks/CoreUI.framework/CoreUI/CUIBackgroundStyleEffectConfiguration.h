@class NSString;

@interface CUIBackgroundStyleEffectConfiguration : CUIStyleEffectConfiguration {
    int _shouldRespectOutputBlending;
}

@property (copy, nonatomic) NSString *backgroundType;
@property (nonatomic) BOOL effectShowsValue;

- (id)init;
- (BOOL)shouldRespectOutputBlending;
- (BOOL)shouldIgnoreForegroundColor;
- (void)setShouldRespectOutputBlending:(BOOL)a0;
- (void)setSelectionType:(long long)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
