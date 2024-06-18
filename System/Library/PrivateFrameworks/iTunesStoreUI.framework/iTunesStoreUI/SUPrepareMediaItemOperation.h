@class SUMediaPlayerItem;

@interface SUPrepareMediaItemOperation : ISOperation

@property (readonly, copy, nonatomic) SUMediaPlayerItem *mediaPlayerItem;

- (id)init;
- (void)dealloc;
- (void)run;
- (BOOL)_runHEADRequest:(id *)a0;
- (id)initWithMediaPlayerItem:(id)a0;

@end
