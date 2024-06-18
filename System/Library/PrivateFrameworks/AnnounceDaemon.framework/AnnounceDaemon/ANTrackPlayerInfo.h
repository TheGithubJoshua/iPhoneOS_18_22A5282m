@class NSString, AVPlayerItem;

@interface ANTrackPlayerInfo : NSObject

@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (readonly, nonatomic) NSString *announcementID;
@property (readonly, nonatomic) long long trackType;
@property (nonatomic) BOOL completed;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPlayerItem:(id)a0 announcementID:(id)a1 trackType:(long long)a2;

@end
