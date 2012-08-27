//
//  HotMVGetter.h
//  MusicPlayer
//
//  Created by Bill on 12-8-21.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DFDownloader.h"

@protocol HotMVGetterDelegate <NSObject>
-(void)downloadFinishedWithResult:(NSMutableArray*)result;
@end

@interface HotMVGetter : NSObject<DFDownloaderDelegate>
-(void)getHotMVWithPage:(int)page;
-(NSMutableArray*)searchByString:(NSString*)theString;
@property(retain,nonatomic)id<HotMVGetterDelegate>delegate;
@end
