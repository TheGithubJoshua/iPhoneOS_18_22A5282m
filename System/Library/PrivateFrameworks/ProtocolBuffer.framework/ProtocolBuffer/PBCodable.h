@class NSData;

@interface PBCodable : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *data;

+ (id)options;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)formattedText;
- (id)initWithData:(id)a0;

@end
