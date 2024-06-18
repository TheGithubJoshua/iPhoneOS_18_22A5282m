@class NSString, NSDictionary, IMSharedPersona;

@interface IMSharedEmergencyInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) IMSharedPersona *emergencyUserPersona;
@property (readonly, nonatomic) IMSharedPersona *senderPersona;
@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, nonatomic) long long messageType;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)infoFromDictionary:(id)a0 isStewieTranscriptSharingMessage:(BOOL *)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStewieUserPersona:(id)a0 stewieUserPersona:(id)a1 conversationID:(id)a2 messageType:(long long)a3;

@end
