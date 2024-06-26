@class NSDictionary;

@interface NSTransitInformationCheckingResult : NSTextCheckingResult {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSDictionary *_components;
    id _underlyingResult;
}

@property (readonly) void *underlyingResult;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (unsigned long long)resultType;
- (id)components;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_adjustRangesWithOffset:(long long)a0;
- (void)dealloc;
- (id)resultByAdjustingRangesWithOffset:(long long)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 components:(id)a1;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 components:(id)a1 underlyingResult:(void *)a2;

@end
