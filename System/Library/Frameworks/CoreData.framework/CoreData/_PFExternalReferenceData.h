@class NSData, NSString;

@interface _PFExternalReferenceData : NSData <NSCopying, NSMutableCopying> {
    NSData *_originalData;
    void *_bytesPtrForStore;
    unsigned long long _bytesLengthForStore;
    void *_bytesPtrForExternalReference;
    unsigned long long _bytesLengthForExternalReference;
    NSString *_externalReferenceLocation;
    NSString *_safeguardLocation;
    id _ubiquitousLocation;
    struct __externalDataFlags { unsigned char _isStoredExternally : 1; unsigned char _hasMappedData : 1; unsigned char _cleanupOnDealloc : 1; unsigned char _dataProtectionLevel : 3; unsigned char _isStoredUbiquitously : 1; unsigned char _createdByUbiquityImport : 1; unsigned int _reserved : 24; } _externalDataFlags;
}

+ (Class)classForKeyedUnarchiver;

- (id)initForUbiquityDictionary:(id)a0 store:(id)a1;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initForExternalLocation:(id)a0 safeguardLocation:(id)a1 data:(id)a2 protectionLevel:(int)a3;
- (id)copy;
- (BOOL)isEqualToData:(id)a0;
- (id)initWithStoreBytes:(const void *)a0 length:(unsigned long long)a1 externalLocation:(id)a2 safeguardLocation:(id)a3 protectionLevel:(int)a4 ubiquitousLocation:(id)a5;
- (id)externalReferenceLocationString;
- (id)_originalData;
- (Class)classForCoder;
- (id)UUID;
- (id)mutableCopy;
- (int)preferredProtectionLevel;
- (const char *)_safeguardLocation;
- (id)databaseValue;
- (const void *)_bytesPtrForExternalReference;
- (BOOL)isEqual:(id)a0;
- (id)initWithStoreBytes:(const void *)a0 length:(unsigned long long)a1 externalLocation:(id)a2 safeguardLocation:(id)a3 protectionLevel:(int)a4;
- (id)description;
- (void)doCleanupOnDealloc;
- (unsigned long long)_bytesLengthForExternalReference;
- (const char *)_externalReferenceLocation;
- (void)_writeExternalReferenceToInterimLocation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)dealloc;
- (void)_moveExternalReferenceToPermanentLocation;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (void)_setBytesForExternalReference:(const void *)a0;
- (BOOL)_createdByUbiquityImport;
- (BOOL)hasExternalReferenceContent;
- (id)_safeguardLocationString;
- (const void *)_bytesPtrForStore;
- (unsigned long long)length;
- (unsigned long long)_bytesLengthForStore;
- (void)_deleteExternalReferenceFromPermanentLocation;
- (const void *)bytes;

@end
