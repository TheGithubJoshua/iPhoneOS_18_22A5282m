@class IKCSSMediaQuery;

@interface IKCSSAtMediaRule : IKCSSRule <NSCopying> {
    IKCSSMediaQuery *_mediaQuery;
}

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } queryRange;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mediaQuery;
- (id)initWithMediaQuery:(id)a0;

@end
