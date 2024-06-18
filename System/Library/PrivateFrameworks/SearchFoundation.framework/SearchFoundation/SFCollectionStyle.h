@class NSDictionary, NSData, NSString;

@interface SFCollectionStyle : NSObject <SFCollectionStyle, NSSecureCoding, NSCopying> {
    struct { unsigned char initiallyVisibleCardSectionCount : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long initiallyVisibleCardSectionCount;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasInitiallyVisibleCardSectionCount;

@end