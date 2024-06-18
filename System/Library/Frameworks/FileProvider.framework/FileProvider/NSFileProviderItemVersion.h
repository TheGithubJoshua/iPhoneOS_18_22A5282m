@class NSData, NSString;

@interface NSFileProviderItemVersion : NSObject <NSSecureCoding>

@property (class, readonly) NSData *beforeFirstSyncComponent;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *lastEditorDeviceName;
@property (readonly, nonatomic) NSData *contentVersion;
@property (readonly, nonatomic) NSData *metadataVersion;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithContentVersion:(id)a0 metadataVersion:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithContentVersion:(id)a0 metadataVersion:(id)a1 lastEditorDeviceName:(id)a2;
- (id)etagHash;
- (id)versionRewritingBeforeFirstSync;

@end
