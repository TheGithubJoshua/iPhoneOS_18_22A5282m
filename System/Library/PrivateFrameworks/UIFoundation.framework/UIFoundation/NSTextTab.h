@class NSDictionary;

@interface NSTextTab : NSObject <NSCopying, NSCoding, NSSecureCoding> {
    struct { unsigned char alignment : 4; unsigned int refCount : 24; unsigned char unused : 4; } _flags;
    double _location;
    id _reserved;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long alignment;
@property (readonly, nonatomic) double location;
@property (readonly, nonatomic) NSDictionary *options;

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)columnTerminatorsForLocale:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)init;
- (oneway void)release;
- (id)initWithTextAlignment:(long long)a0 location:(double)a1 options:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(unsigned long long)a0 location:(double)a1;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)tabStopType;

@end
