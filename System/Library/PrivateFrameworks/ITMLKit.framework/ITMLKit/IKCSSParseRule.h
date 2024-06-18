@class IKArray, IKCSSParseBlock;

@interface IKCSSParseRule : IKCSSParseObject

@property (nonatomic, setter=_setEndRange:) struct _NSRange { unsigned long long location; unsigned long long length; } _endRange;
@property (retain, nonatomic) IKArray *prelude;
@property (retain, nonatomic) IKCSSParseBlock *block;

- (id)init;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void).cxx_destruct;
- (id)description;

@end
