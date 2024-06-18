@class NSData, NSString, NSArray;

@interface NFACTag : NSObject <NSSecureCoding, NFACTag> {
    unsigned int _technology;
    unsigned int _type;
    NSData *_tagID;
    NSData *_pmm;
    NSArray *_allSystemCodes;
    NSData *_appData;
    NSData *_uid;
    NSString *_description;
    unsigned int _ndefAvailability;
    unsigned long long _ndefMessageSize;
    unsigned long long _ndefContainerSize;
    NSData *_atqa;
    NSData *_sak;
    NSData *_historicalBytes;
    unsigned char _silentType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) unsigned int technology;
@property (readonly, nonatomic) BOOL isSilent;
@property (readonly, nonatomic) unsigned char silentType;
@property (readonly, copy, nonatomic) NSData *tagID;
@property (readonly, copy, nonatomic) NSData *UID;
@property (readonly, nonatomic) unsigned int ndefAvailability;
@property (readonly, nonatomic) unsigned long long ndefMessageSize;
@property (readonly, nonatomic) unsigned long long ndefContainerSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)applicationData;
- (id)IDm;
- (id)PMm;
- (id)SystemCode;
- (id)selectedAID;
- (id)historicalBytes;
- (id)sak;
- (id)allSystemCodes;
- (BOOL)applicationDataCoding;
- (id)atqa;
- (id)pupi;
- (id)initWithInternalTag:(id)a0;

@end
