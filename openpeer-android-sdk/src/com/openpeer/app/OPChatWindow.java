package com.openpeer.app;

import java.util.Arrays;
import java.util.List;

import com.openpeer.javaapi.OPConversationThread;
import com.openpeer.javaapi.OPIdentityContact;

public class OPChatWindow {
	OPConversationThread thread;
	List<OPIdentityContact> mParticipants;
	long mUniqueId;

	public long getWindowId() {
		if (mUniqueId == 0) {
			long IDs[] = new long[mParticipants.size()];
			for (int i = 0; i < mParticipants.size() - 1; i++) {
				OPIdentityContact contact = mParticipants.get(i);
				IDs[i] = contact.getUserId();
			}
			Arrays.sort(IDs);
			mUniqueId = IDs.hashCode();
		}
		return mUniqueId;
	}

	public static long getWindowId(long userIds[]) {
		Arrays.sort(userIds);
		return userIds.hashCode();
	}

	public static long getWindowId(List<OPUser> users) {
		long userIds[] = new long[users.size()];
		for (int i = 0; i < userIds.length; i++) {
			OPUser user = users.get(i);
			userIds[i] = user.getUserId();
		}
		// TODO Auto-generated method stub
		return getWindowId(userIds);
	}

}