@class NSString, UARPAccessoryMetadata, CKRecord, NSObject;
@protocol OS_os_log;

@interface CHIPAccessoriesRecord : NSObject <NSCopying, NSSecureCoding> {
    NSObject<OS_os_log> *_log;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) CKRecord *ckRecord;
@property (readonly) NSString *accessoryListSignature;
@property (readonly) NSString *stonehengeCertificateID;
@property (readonly) NSString *installationGuideURLString;
@property (readonly) UARPAccessoryMetadata *accessoryMetadata;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCKRecord:(id)a0;
- (BOOL)createAccessoryMetadata;

@end
