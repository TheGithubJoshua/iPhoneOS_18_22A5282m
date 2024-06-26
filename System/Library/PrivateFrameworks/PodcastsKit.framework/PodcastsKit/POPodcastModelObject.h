@class NSString, NSIndexPath, SAMPCollection;

@interface POPodcastModelObject : NSObject

@property (retain) NSString *uuid;
@property (retain) NSString *title;
@property (retain) NSString *feedUrl;
@property (retain) NSIndexPath *indexPath;
@property (retain) NSString *storeId;
@property (readonly) SAMPCollection *SAMPCollection;

+ (Class)SAMPClass;
+ (id)uriScheme;

- (void).cxx_destruct;
- (id)description;

@end
