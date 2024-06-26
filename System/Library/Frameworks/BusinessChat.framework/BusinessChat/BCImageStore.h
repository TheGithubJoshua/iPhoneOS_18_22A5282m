@class NSArray, NSDictionary, NSData;

@interface BCImageStore : NSObject {
    NSData *_data;
}

@property (retain, nonatomic) NSArray *rawArray;
@property (retain, nonatomic) NSDictionary *dictionary;

- (id)initWithArray:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithImages:(id)a0;

@end
