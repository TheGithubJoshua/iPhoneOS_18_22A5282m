@class NSString, NSNumber;

@interface ASDScreenSyncAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *accountName;
@property (readonly) NSString *bundleID;
@property (copy) NSNumber *externalVersionIdentifier;
@property (copy) NSNumber *itemID;
@property (copy) NSString *itemName;
@property (copy) NSNumber *purchaserDSID;
@property (copy) NSNumber *storeFront;
@property (copy) NSString *vendorName;
@property (readonly) long long metadataType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithBundleID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
