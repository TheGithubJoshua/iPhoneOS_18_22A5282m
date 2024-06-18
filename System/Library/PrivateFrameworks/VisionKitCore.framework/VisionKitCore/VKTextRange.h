@class VKTextPosition;

@interface VKTextRange : VKBaseTextRange <NSCopying>

@property (class, readonly, nonatomic) VKTextRange *zeroRange;

@property (retain, nonatomic) VKTextPosition *start;
@property (retain, nonatomic) VKTextPosition *end;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } nsRange;
@property (readonly, nonatomic) BOOL isZeroRange;
@property (readonly, nonatomic) BOOL isNSNotFound;
@property (readonly, nonatomic) unsigned long long minIndex;
@property (readonly, nonatomic) unsigned long long maxIndex;
@property (readonly, nonatomic) unsigned long long location;
@property (readonly, nonatomic) unsigned long long length;

+ (id)rangeWithStart:(id)a0 end:(id)a1;
+ (id)defaultRange;
+ (id)rangeWithNSRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)rangeWithStartOffset:(unsigned long long)a0 endOffset:(unsigned long long)a1;

- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)summaryDescription;
- (id)initWithStartOffset:(unsigned long long)a0 endOffset:(unsigned long long)a1;
- (id)initWithStart:(id)a0 end:(id)a1;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)containsTextPosition:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
