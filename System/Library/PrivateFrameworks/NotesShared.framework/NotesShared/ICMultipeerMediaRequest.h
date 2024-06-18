@class ICMedia;

@interface ICMultipeerMediaRequest : ICMultipeerResourceRequest

@property (retain) ICMedia *media;

- (void)startRequest;
- (id)note;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
