@class NSString, TSUBufferedReadChannel;

@interface TSUBufferedReadChannelHelper : NSObject <TSUStreamReadChannel> {
    TSUBufferedReadChannel *_bufferedReadChannel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)close;
- (id)initWithBufferedReadChannel:(id)a0;
- (void)readWithHandler:(id /* block */)a0;
- (void)readWithHandlerAndWait:(id /* block */)a0;

@end
