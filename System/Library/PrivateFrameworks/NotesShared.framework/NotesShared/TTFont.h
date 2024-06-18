@class NSString;

@interface TTFont : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id nativeFont;
@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) double pointSize;
@property (readonly, nonatomic) unsigned int fontHints;

- (id)initWithCoder:(id)a0;
- (id)serialize;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithArchive:(const void *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithData:(id)a0;
- (id)initWithName:(id)a0 size:(double)a1 hints:(unsigned int)a2;
- (void)saveToArchive:(void *)a0;

@end
