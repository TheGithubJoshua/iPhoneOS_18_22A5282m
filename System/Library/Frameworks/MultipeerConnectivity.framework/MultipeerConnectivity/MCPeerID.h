@class NSString, MCPeerIDInternal;

@interface MCPeerID : NSObject <NSCopying, NSSecureCoding> {
    MCPeerIDInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *displayName;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)internalDescription;
- (id)serializedRepresentation;
- (unsigned int)pid;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithDisplayName:(id)a0;
- (id)idString;
- (id)displayNameAndPID;
- (id)initWithIDString:(id)a0 displayName:(id)a1;
- (id)initWithPID:(unsigned int)a0 displayName:(id)a1;
- (unsigned long long)pid64;

@end
