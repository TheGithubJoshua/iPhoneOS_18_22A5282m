@class NSURL;

@interface NSLinkCheckingResult : NSTextCheckingResult {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSURL *_url;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (unsigned long long)resultType;
- (id)URL;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_adjustRangesWithOffset:(long long)a0;
- (id)description;
- (void)dealloc;
- (id)resultByAdjustingRangesWithOffset:(long long)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 URL:(id)a1;

@end
