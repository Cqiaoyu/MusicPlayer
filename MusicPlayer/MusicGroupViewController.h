//
//  MusicGroupViewController.h
//  MusicPlayer
//
//  Created by Bill on 12-8-16.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MusicGroupViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>{
    UITableView *songsTableView;
}
@property(retain,nonatomic)UITableView *songsTableView;

@end
