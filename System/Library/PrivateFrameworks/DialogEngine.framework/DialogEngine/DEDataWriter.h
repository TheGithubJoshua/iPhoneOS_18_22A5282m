@class NSMutableData;

@interface DEDataWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSMutableData *data;

- (void)writeData:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)close;

@end
