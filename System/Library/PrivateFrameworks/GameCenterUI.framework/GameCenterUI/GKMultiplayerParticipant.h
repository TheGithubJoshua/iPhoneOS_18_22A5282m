@class GKPlayer;

@interface GKMultiplayerParticipant : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (nonatomic) long long status;
@property (retain, nonatomic) GKPlayer *player;
@property (nonatomic) long long number;
@property (nonatomic) BOOL isPlaceHolderItem;
@property (readonly, nonatomic) BOOL isSharePlayInvitee;

+ (id)stringFromGKMultiplayerParticipantStatus:(long long)a0;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
