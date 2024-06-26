@class TUHandle, NSUUID, NSSet, TUConversationMember, TUConversationVirtualParticipantConfig, TUConversationUnreliableMessengerConfig;

@interface TUConversationActivitySessionContainer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) NSUUID *groupUUID;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSSet *activitySessions;
@property (copy, nonatomic) NSSet *remoteMembers;
@property (retain, nonatomic) TUConversationMember *localMember;
@property (retain, nonatomic) TUHandle *initiator;
@property (nonatomic) unsigned long long localParticipantIdentifier;
@property (copy, nonatomic) NSSet *virtualParticipants;
@property (copy, nonatomic) TUConversationVirtualParticipantConfig *virtualParticipantConfig;
@property (copy, nonatomic) TUConversationUnreliableMessengerConfig *unreliableMessengerConfig;
@property (copy, nonatomic) NSSet *activeRemoteParticipants;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
