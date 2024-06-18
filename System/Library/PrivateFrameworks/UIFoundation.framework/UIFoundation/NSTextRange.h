@protocol NSTextLocation;

@interface NSTextRange : NSObject

@property (readonly, getter=isEmpty) BOOL empty;
@property (readonly) id<NSTextLocation> location;
@property (readonly) id<NSTextLocation> endLocation;

+ (id)combineTextRanges:(id)a0 withTextRanges:(id)a1 usingOperator:(int)a2;

- (id)initWithLocation:(id)a0;
- (BOOL)containsLocation:(id)a0;
- (id)initWithLocation:(id)a0 endLocation:(id)a1;
- (BOOL)containsRange:(id)a0;
- (id)textRangeByIntersectingWithTextRange:(id)a0;
- (BOOL)isEqualToTextRange:(id)a0;
- (id)terminator;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (void)dealloc;
- (BOOL)intersectsWithTextRange:(id)a0;
- (id)textRangeByFormingUnionWithTextRange:(id)a0;

@end
