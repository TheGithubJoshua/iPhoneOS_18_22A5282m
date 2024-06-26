@class NSString, NSArray, SFCommand, NSDictionary, SFImage, NSData;

@interface SFCommandButtonItem : SFButtonItem <SFCommandButtonItem, NSSecureCoding, NSCopying> {
    struct { unsigned char uniqueId : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SFImage *image;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) SFCommand *command;
@property (copy, nonatomic) NSArray *previewButtonItems;
@property (nonatomic) unsigned long long uniqueId;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasUniqueId;

@end
