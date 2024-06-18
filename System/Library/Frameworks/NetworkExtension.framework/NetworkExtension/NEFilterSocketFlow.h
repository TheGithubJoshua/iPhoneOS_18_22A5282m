@class NSString, NWEndpoint, NSUUID;

@interface NEFilterSocketFlow : NEFilterFlow <NSSecureCoding, NSCopying> {
    long long _generateIdentifierOnce;
    NSUUID *_uuid;
    NSUUID *_euuid;
    unsigned long long _socketID;
    NSUUID *_socketUUID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NWEndpoint *localEndpoint;
@property (copy) NWEndpoint *remoteEndpoint;
@property (copy) NSString *remoteHostname;
@property int socketFamily;
@property int socketType;
@property int socketProtocol;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)identifier;
- (id)identifierString;
- (BOOL)createDataCompleteReply:(id)a0 controlSocket:(int)a1 direction:(long long)a2 verdict:(id)a3 context:(id)a4;
- (BOOL)createDataReply:(id)a0 controlSocket:(int)a1 direction:(long long)a2 verdict:(id)a3 context:(id)a4;
- (BOOL)createNewFlowReply:(id)a0 controlSocket:(int)a1 verdict:(id)a2 context:(id)a3;

@end
