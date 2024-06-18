@class NSString, NSURL;

@interface ICQQuotaApp : NSObject

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSURL *iconURL;
@property (retain, nonatomic) NSURL *thumbnailURL;

- (void).cxx_destruct;
- (id)description;

@end
