@class NSString, NSSet, NSURL;

@interface NPKTapToRadarRequest : NSObject {
    NSURL *_tapToRadarURL;
}

@property (class, readonly, nonatomic) BOOL canPostRequest;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *body;
@property (readonly, nonatomic) NSSet *attachmentsPaths;
@property (readonly, nonatomic) NSURL *tapToRadarURL;

+ (void)postWithTitle:(id)a0 body:(id)a1;

- (id)initWithDictionary:(id)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)post;
- (id)_attachmentURLs;
- (id)initWithTitle:(id)a0 body:(id)a1;
- (id)initWithTitle:(id)a0 body:(id)a1 attachmentPaths:(id)a2;

@end
