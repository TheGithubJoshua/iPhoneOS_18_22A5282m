@class SNFileServer;

@interface SNDaemon : NSObject {
    SNFileServer *_fileServer;
}

- (id)init;
- (void).cxx_destruct;
- (void)run;

@end
